def can_connect_all_sockets(socket_distances, cable_lengths):
    """
    判断是否所有插座都可以用网线连接到交换机。
    
    参数:
    socket_distances (list): 插座到交换机的距离列表。
    cable_lengths (list): 网线长度列表。

    返回:
    str: 如果所有插座都能用网线连接，返回"DA"，否则返回"NE"。
    """
    
    # 对插座距离和网线长度进行升序排序，方便进行匹配
    socket_distances.sort()  # 将插座距离从小到大排列
    cable_lengths.sort()     # 将网线长度从小到大排列

    # 初始化一个指向网线列表的索引，用来追踪当前处理的网线
    cable_index = 0

    # 遍历每个插座的距离
    for distance in socket_distances:
        # 寻找能够连接当前插座的网线
        # 如果当前网线长度小于插座距离，继续寻找更长的网线
        while cable_index < len(cable_lengths) and cable_lengths[cable_index] < distance:
            cable_index += 1  # 移动到下一根网线

        # 如果已经用尽了所有网线，但还没找到合适的网线，则返回"NE"
        if cable_index == len(cable_lengths):
            return "NE"

        # 找到合适的网线之后，继续处理下一根网线
        # 这里我们假设每根网线只能用一次，所以找到合适网线后需要移动索引到下一根网线
        cable_index += 1

    # 如果所有插座都成功连接上网线，返回"DA"
    return "DA"

# 读取输入数据
n = int(input())  # 读取插座数量
socket_distances = list(map(int, input().split()))  # 读取插座距离列表，并转换为整数列表
cable_lengths = list(map(int, input().split()))     # 读取网线长度列表，并转换为整数列表

# 调用函数判断是否所有插座能连接上网线，并输出结果
result = can_connect_all_sockets(socket_distances, cable_lengths)
print(result)  # 输出结果 "DA" 表示可以连接，"NE" 表示不能连接
