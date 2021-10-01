reverse(a.begin()+i,a.begin()+d+i);
reverse(a.begin()+d+i,a.end());
reverse(a.begin()+i,a.end());

// or just you can use rotate function to rotate the array 
// here d is the distance from left for left rotation 
// and right distance for right distance 
rotate(a.begin(), a.begin()+d, a.end());//Left rotation
rotate(a.begin(), a.begin()+a.size()-d, a.end());// Right rotation
