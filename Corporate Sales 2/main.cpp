#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct divis //division
{
    string nme;    // the names
    double fir_Qtr; //first quarter
    double sec_Qtr; //second quarter
    double thr_Qtr; //third quarter
    double four_Qtr; //fourth wuarter
    double tol;   //total
    double avg;  //average of the four quarters
};


void col_Sales(double [], string); //sales prototype
void str_Sales(divis *, double []);
void dis_Divis(divis);

int main()
{

    divis nth, est, sth, wst; //north, east, south, west
    double qtr_inp[4] = {0.0, 0.0, 0.0, 0.0}; //for decimal numbers

    nth.nme = "North";
    est.nme = "East";
    sth.nme = "South";
    wst.nme = "West";

    col_Sales(qtr_inp, nth.nme); //collects the sales
    str_Sales(&nth, qtr_inp); //stores the sales
    dis_Divis(nth);          // displays the division

    col_Sales(qtr_inp, est.nme);
    str_Sales(&est, qtr_inp);
    dis_Divis(est);

    col_Sales(qtr_inp, sth.nme);
    str_Sales(&sth, qtr_inp);
    dis_Divis(sth);

    col_Sales(qtr_inp, wst.nme);
    str_Sales(&wst, qtr_inp);
    dis_Divis(wst);


}

void col_Sales(double qtr_IP[], string dvs)
{
    for(int x = 0; x < 4; x++)
    {
        cout << "\nEnter the sales for division " << dvs << " quarter " << x+1 << ":  ";
        while(!(cin >> qtr_IP[x]))
        {
            cout << "\n     Try entering a valid sales value:  " << endl;
        }

    }
}

void str_Sales(divis *dvs, double qtr_IP[])
{
    dvs->fir_Qtr = qtr_IP[0];
    dvs->sec_Qtr = qtr_IP[1];
    dvs->thr_Qtr = qtr_IP[2];
    dvs->four_Qtr = qtr_IP[3];
    dvs->tol = (qtr_IP[0] + qtr_IP[1] + qtr_IP[2] + qtr_IP[3]);
    dvs->avg = (dvs->tol / 4);

}

void dis_Divis(divis dvs)
{
    cout << endl << "" << dvs.nme << endl << "-------\n" <<
        "First Quarter : $" << dvs.fir_Qtr << endl <<
        "Second Quarter : $" << dvs.sec_Qtr << endl <<
        "Third Quarter : $" << dvs.thr_Qtr << endl <<
        "Fourth Quarter : $" << dvs.four_Qtr << endl <<
        "Total : $" << dvs.tol << endl <<
        "Average : $" << dvs.avg;


}
