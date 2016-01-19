# Installation
These installation instructions produce a fresh installation capable of pulling
down user settings via the [dotfiles](https://github.com/seagoj/dotfiles) repo.

## Contents
1) [Installing Arch Linux](#archLinux)
    1) [Create Partitions](#partitions)
    2) [Write File System](#fileSystem)
    3) [Mount Drives](#mount)
    4) [Base Installation](#base)
    5) [Create Fstab](#fstab)

## Installing Arch Linux <a name='archLinux'></a>

### Create Partitions <a name='partitions'></a>
    gdisk /dev/sdx
    o # clears current partitions

#### create EFI boot partition sda1
    n
    <enter>
    <enter>
    +100M
    ef02

#### create system partition sda2
    n # creates new partition; accept all defaults for single partition drive
    w # writes partition

### Create file systems <a name='fileSystem'></a>
    mkfs.btrfs /dev/sdx1
    mkfs.btrfs /dev/sdx2

### Mount drives <a name='mount'></a>
    mount /dev/sda2 /mnt
    mkdir /mnt/boot
    mount /dev/sda1 /mnt/boot

### Bootstrap Arch <a name='base'></a>
    pacstrap -i /mnt base base-devel

### Generate fstab <a name='fstab'></a>
    genfstab -U /mnt > /mnt/etc/fstab

### Change root
arch-chroot /mnt /bin/bash

### Locale
1) Uncomment line containing en_US.UTF-8 in /etc/locale.gen
locale-gen

### Set time
ln -s /usr/share/zoneinfo/America/Chicago /etc/localtime
hwclock --systohc --utc

### BIOS
#### Install grub
pacman -S grub os-prober
grub-install --recheck [drive]
grub-mkconfig -o /boot/grub/grub.cfg

### Hostname
echo anvil > /etc/hostname

### Enable wired connection
ls /sys/class/net
systemctl enable dhcpcd@[interface].service

### Set root password
passwd

### Unmount and reboot
exit
umount -R /mnt
reboot

### Create non-root user
pacman -Syu zsh git stow openssh virtualbox-guest-utils iw wpa_supplicant dialog --noconfirm
adjust PATH in /etc/profile to not be destructive
useradd [user] -s/bin/zsh
passwd [user]
mkdir /home/[user]
lsblk
mkdir /mnt/keychain
mount /dev/sdX2 /mnnt/keychain
copy .gnupg to VM
echo "pinentry-program $(which pinentry-curses)" > ~/.gnupg/gpg-agent.conf
chown -R [user] /home/[user]
sudo echo "[user] ALL=(ALL) NOPASSWD:ALL" > /etc/sudoers.d/[user]
login as user
echo RELOADAGENT | gpg-connect-agent
wifi-menu
git clone git://github.com/seagoj/dotfiles.git --recurse-submodules
cd dotfiles
./bootstrap.sh
open nvim and :PlugInstall
cd ~/.nvim/plugged/YouCompleteMe
installYCM
