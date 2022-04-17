import sys


class Graph:
    def __init__(self, num_vertices):
        self.adjacency_list = []
        self.total_weight = 0
        self.num_vertices = num_vertices
        for i in range(num_vertices):
            self.adjacency_list.append(LinkedList())

    def add_new_node(self, previous_node_num, node_num, weight):
        new_node = Node(node_num, weight)
        self.adjacency_list[previous_node_num].append(new_node)
        new_node = Node(previous_node_num, weight)
        self.adjacency_list[node_num].append(new_node)

        self.total_weight += weight

    def get_initial_node(self):
        return 0


class LinkedList:
    length = 0

    def __init__(self):
        self.head = None

    def append(self, new_node):
        self.length += 1
        if self.head is None:
            self.head = new_node
            return

        last = self.head
        while (last.next):
            last = last.next
        last.next = new_node

    def __iter__(self):
        cur_node = self.head
        while cur_node:
            yield cur_node
            cur_node = cur_node.next


class Node:
    def __init__(self, num, weight):
        self.num = num
        self.weight = weight
        self.next = None


def main():
    input = sys.stdin.readline
    n_cases = int(input())
    for i in range(1, n_cases + 1):
        print(f'Case #{i}:')
        prim()
        print('------------------\n')


def prim():
    num_vertices, num_edges = map(int, input().split())
    # Create input graph
    graph = Graph(num_vertices)
    for i in range(num_edges):
        previous_node_num, node_num, weight = map(int, input().split())
        graph.add_new_node(previous_node_num, node_num, weight)

    solution_graph = Graph(graph.num_vertices)
    visited_nodes, selected_path = [], ''
    visited_nodes.append(graph.get_initial_node())
    print('Initial node:', graph.get_initial_node(), '\n')
    last = 0

    while len(visited_nodes) < graph.num_vertices:
        min_neighbor = Node(-1, -1)
        while min_neighbor.num == -1:
            last -= 1
            current_node_num = visited_nodes[last]
            min_neighbor = get_min_neighbor(current_node_num, graph, visited_nodes)

        print(f'Selected next node: {min_neighbor.num}\n')
        visited_nodes.append(min_neighbor.num)

        solution_graph.add_new_node(current_node_num,
                                    min_neighbor.num,
                                    min_neighbor.weight)

        selected_path += (f'\nNode {current_node_num} to node {min_neighbor.num}' +
                          f' with weight {min_neighbor.weight}')
        last = 0

    print('------------------')
    print('Selected paths:', selected_path)
    print(f'Total min weight is {solution_graph.total_weight}')


def get_min_neighbor(current_node_num, graph, visited_nodes):
    current_node_neighbors = graph.adjacency_list[current_node_num]
    min_node = Node(-1, -1)
    for node in current_node_neighbors:
        print(f'Node {current_node_num} to node {node.num} weight is {node.weight}')
        if (node.num not in visited_nodes) and (node.weight < min_node.weight or min_node.weight == -1):
            min_node = node
    return min_node


if __name__ == '__main__':
    main()
