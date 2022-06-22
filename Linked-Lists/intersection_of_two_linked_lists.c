/*
method1:
    1. create an empty hash set
    2. traverse first list put all of its node addresses into hash set
    3. traverse the second list and look for every node address in hash set, ass soon as we find the address in hash set return true

method2: 
    1. count the number of nodes in both the linked lists, let C1 and C2
    2. traverse the bigger LL for Absolute(C1-C2) times i.e removing the extra nodes in bigger LL
    3. now traverse both the LL simultaniously until we meet common point(Address). if met return true else false

method3:
    1. push all node addresses of List to two stacks
    2. now pop() from both the stacks and comapre the addresses
    3. if we find common address return true else false
*/
