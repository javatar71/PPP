### TRY THIS
Get the ‘‘name and age’’ example to run. Then, modify it to write out the age in
number of months: read the input in years and multiply (using the ∗ operator) by 12.
Read the age into a double to allow for children who can be very proud of being ﬁve
and a half years old rather than just ﬁve.

```
int main(){
    // read name and age
    cout << "Please enter your ﬁrst name and age\n";
    string ﬁrst_name = "???";
    // string variable ("???" indicates "don’t know the name")
    int age = −1;
    // integer variable (-1 means "don’t know the age")
    cin >> ﬁrst_name >> age;
    // read a string followed by an integer
    cout << "Hello, " << ﬁrst_name << " (age " << age << ")\n";
}
```
