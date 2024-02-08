class GougleMaps:
    def __init__(self): pass
    
    def calculate_eta(self, distance: int, speed: int) -> float:
        eta = round(distance / speed, 2)
        return eta

def main():
    maps = GougleMaps()
    eta1 = maps.calculate_eta(distance=300, speed=80)
    eta2 = maps.calculate_eta(distance=193, speed=47)
    print(eta1)
    print(eta2)


if __name__ == "__main__":
    main()
