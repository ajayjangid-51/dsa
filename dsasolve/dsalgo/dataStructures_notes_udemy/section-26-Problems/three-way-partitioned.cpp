void threeWayPartition(vector<int> &array, int a, int b)
{
    vector<int> arrl, arrm, arrh;
    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] < a)
        {
            arrl.push_back(array[i]);
        }
    }
    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] >= a && array[i] <= b)
        {
            arrm.push_back(array[i]);
        }
    }
    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] > b)
        {
            arrh.push_back(array[i]);
        }
    }
    for (int i = 0; i < arrl.size(); i++)
    {
        array[i] = arrl[i];
    }
    for (int i = arrl.size(); i < (arrl.size() + arrm.size()); i++)
    {
        array[i] = arrl[i];
    }
    for (int i = (arrl.size() + arrm.size()); i < array.size(); i++)
    {
        array[i] = arrl[i];
    }
}