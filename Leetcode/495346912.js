var getIntersectionNode = function(headA, headB) {
    let temp = headA;
    let m = []
    while(temp) {
        m.push(temp)
        temp = temp.next;    
    }
    temp = headB;
    while(temp) {
        if(m.includes(temp)) {
            return temp;
        }
        temp = temp.next;
    }
    return null;
};
