#!/usr/bin/env ruby

class Node
    attr_accessor :parent, :children, :siblings, :value

    def initialize(state={})
        state[:parent] ||= nil
        state[:value] ||= 'root'
        @parent = state[:parent]
        @children = []
        if @parent.nil?
            @siblings = []
        else
            @siblings = @parent.children
            @siblings.delete(self)
        end
        @value = state[:value]
    end

    def path
        if @parent.nil? 
            ["root"]
        else
            @parent.path() + [@value]
        end
    end

    def values
        ret = Hash.new
        @children.each do |c|
            ret[c.value.to_s] = c.values
        end
        ret
    end

    def child(value)
        @children << Node.new(parent: self, value: value)
    end
end

def build(node)
    p node.value
    if node.value == 10
        p node.path()
        exit
    else
        node.siblings.each do |s|
            s.child(increment(s.value))
            s.child(square(s.value))
            build(s)
        end

        node.children.each do |c|
            c.child(increment(c.value))
            c.child(square(c.value))
            build(c)
        end 
    end
end

def increment(value)
    value+1
end

def square(value)
    value*value
end

test = Node.new()
test.child(1)
build(test)
p test.values()
