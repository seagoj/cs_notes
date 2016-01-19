#!/usr/bin/env ruby

class Node
    attr_accessor :parent, :children, :siblings, :action, :answer
    @@validActions = ['increment', 'square']

    def initialize(state)
        state[:parent] ||= 'NONE'
        state[:action] ||= 'NONE'
        @parent = state[:parent]
        @children = []
        @action = state[:action]
        @siblings = []
        if @@validActions.include?(state[:action])
            @answer = self.send(state[:action])
        elsif state[:action] == 'NONE'
            @answer = state[:answer]
        else
            p "#{action} is an invalid action."
            exit(1)
        end
    end

    def path
        if @parent == 'NONE'
            [@action, @answer]
        else
            @parent.path() + [@action, @answer]
        end
    end

    def child(action)
        node =  Node.new(parent: self, action: action)
        @children << node
        @children.each do |c|
            p "#{c.action}:#{c.answer}"
        end
        @siblings = @parent.children if @parent!='NONE'
        p "Parent: #{@parent.answer}" if !@siblings.empty?
        siblings.each do |s|
            p "#{s.action}:#{s.answer}"
        end
        p node.answer
    end

    def increment
        @parent.answer+1
    end

    def square
        @parent.answer * @parent.answer
    end
end

class IncSq
    attr_accessor :start, :goal

    def initialize(start, goal)
        @start = start
        @goal = goal
        @validActions = ['increment','square']
        @tree = Node.new({answer: @start})
        self.build()
    end

    def build(node=@tree)
        # Make children
        @validActions.each do |a|
            answer = node.child(a)
            p "Parent answer: #{node.parent.answer}" if node.parent != "NONE"
            p "Answer: #{answer}"
            exit if (node.parent != "NONE" && answer == node.parent.answer)
        end

        self.checkForGoal(node)

        # Check siblings
        p "Check siblings"
        node.children.each do |h|
            h.parent.siblings.each do |ps|
                self.build(ps)
            end
        end

        # Check children
        p "Check children"
        node.children.each do |i|
            self.build(i)
        end
    end

    def checkForGoal(node)
        node.children.each do |c|
            p c.answer
            #return c.path() if c.answer == @goal
            exit if c.answer == @goal
        end
    end
end

IncSq.new(1, 10)
