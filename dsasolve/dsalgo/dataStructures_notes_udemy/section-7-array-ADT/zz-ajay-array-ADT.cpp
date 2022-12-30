void Display(Array p1){
    cout << "the length or the array is " << p1.length << endl;
    for(int i=0; i< p1.length ; i++){
        cout << p1.p[i] << "  ";
    }
}

void Append(Array* p1 , int p2){
    if(p1->length < p1->size){

    p1->p[p1->length] = p2;
    p1->length++;
    // or as apn directly esseh bhi kr sktehh hai...
    // p1->p[p1->length++] =p2; // as yaha pe phle assignation and then increment hoga , thus toh mtlb apne dono kaam ess ek-statement se hi hojayenge.. thus toh mtlb post-increment ka actual use yaha esseh es tarah hota hai...
    }
    else{
        cout << "sorry the array is full we cannot store more element into it" << endl;
    }
}