#include <iostream>
using namespace std;

class diamondCompany
{
private:
    int comp_id;
    string comp_name;
    int comp_staff_qty;
    double comp_revenue;
    int comp_import_raw_diamond;
    int comp_export_diamond;
    string comp_ceo;

public:
    diamondCompany(int id, string name, int staff_qty, double revenue,
                   int raw_diamond, int export_diamond, string ceo)
    {
        comp_id = id;
        comp_name = name;
        comp_staff_qty = staff_qty;
        comp_revenue = revenue;
        comp_import_raw_diamond = raw_diamond;
        comp_export_diamond = export_diamond;
        comp_ceo = ceo;
    }

    void DisplayCompanyDetails()
    {
        cout<<"\n==========company details=========\n";
        
        cout << "\nCompany ID: "       << comp_id << endl;
        cout << "Company Name: "       << comp_name << endl;
        cout << "Staff Quantity: "     << comp_staff_qty << endl;
        cout << "Revenue: "            << comp_revenue << endl;
        cout << "Import Raw Diamond: " << comp_import_raw_diamond << endl;
        cout << "Export Diamond: "     << comp_export_diamond << endl;
        cout << "CEO: "                << comp_ceo << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of companies: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int id, staff, import_raw, export_dia;
        double revenue;
        string name, ceo;

        cout << "\nEntering details of company " << i + 1 << endl;

        cout << "Company ID: ";
        cin >> id;

        cout << "Company Name: ";
        cin >> name;

        cout << "Staff Quantity: ";
        cin >> staff;

        cout << "Revenue: ";
        cin >> revenue;

        cout << "Import Raw Diamond: ";
        cin >> import_raw;

        cout << "Export Diamond: ";
        cin >> export_dia;

        cout << "CEO Name: ";
        cin >> ceo;

        diamondCompany d(id, name, staff, revenue, import_raw, export_dia, ceo);
        d.DisplayCompanyDetails();
    }

    return 0;
}