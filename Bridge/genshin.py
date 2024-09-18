def min_days_to_reach(target_points: int) -> int:
    current_points = 0  # 当前累积的积分
    days = 0  # 累计天数
    week = 1  # 第几周
    
    while current_points < target_points:
        # 每周7天，当前周每天获取week个积分
        for day in range(7):
            current_points += week  # 每天积累week个积分
            days += 1  # 经过1天
            if current_points >= target_points:
                return days  # 如果积分达到或超过目标积分，返回天数
        week += 1  # 每过一周，进入下一周，积分递增

# 输入目标积分
target_points = int(input())
# 输出至少需要的天数
print(min_days_to_reach(target_points))
