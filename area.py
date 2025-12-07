import math
def area(**params):
    if(params['length'] == None): print('Length required')
    elif(params['length']): print(params['length']*params['length'])
    elif(params['width']):
        print(2*params['length']*params['width'])
    elif(params['radius']):
        print(3.14 * params['radius'])

area(length=10, width=5)
