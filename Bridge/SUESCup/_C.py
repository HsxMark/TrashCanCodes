def can_connect_all_sockets(socket_distances, cable_lengths):
    # 对插座到交换机的距离和网线长度进行排序
    socket_distances.sort()
    cable_lengths.sort()

    # 初始化指向网线的指针
    cable_index = 0

    # 遍历每个插座距离
    for distance in socket_distances:
        # 寻找足够长的网线来连接这个插座
        while cable_index < len(cable_lengths) and cable_lengths[cable_index] < distance:
            cable_index += 1
        
        # 如果找不到合适的网线，则返回"NE"
        if cable_index == len(cable_lengths):
            return "NE"
        
        # 找到合适的网线后，移动到下一根网线
        cable_index += 1

    # 如果所有插座都找到了合适的网线，则返回"DA"
    return "DA"

# 读取输入数据
n = int(input())
socket_distances = list(map(int, input().split()))
cable_lengths = list(map(int, input().split()))

# 调用函数并输出结果
result = can_connect_all_sockets(socket_distances, cable_lengths)
print(result)
