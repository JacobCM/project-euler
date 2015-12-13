def paths(x,y,z):
    if x==z and y==z:
        return 1
    elif y>z or x>z:
        return 0
    else:
        if y<z and x<z:
            return paths(x+1,y,z)+paths(x,y+1,z)
        elif y<z:
            return paths(x,y+1,z)
        elif x<z:
            return paths(x+1,y,z)
