// EXERCISE 1 – A System for Blood Pressure Records


// In a hospital, a patient’s blood pressure is measured daily and is then stored in records that combine two pressure
// values (systolic and diastolic) as well as the date the measurement was taken.


#include <iostream>
#include <string>
#include <vector>


class Date {    // A class which contains day, month, and year attributes.
    public:
        int day;
        int month;
        int year;

        Date(int day, int month, int year): day(day), month(month), year(year) {    // Constructor for the Date class.

        }
};


class Blood {    // A class with systolic, diastolic, and date attributes.
    public:
        int systolic;
        int diastolic;
        Date date;

        Blood(int systolic, int diastolic, Date date): systolic(systolic), diastolic(diastolic), date(date) {   // Constructor for the Blood class.

        }
};


class Patient {    // A class with an attribute for a patient's name. It also contains functions which add a new measurement to a patient's record as well as print a patient's record.
    public:
        std::string patient_name;

        std::vector<Blood> patient_record;    // This vector will store all the blood records of a given patient.

        Patient(std::string name) {    // Constructor for the Patient class.
            patient_name = name;    // Sets the name passed to initialize a new Patient object.
        }

        void addRecord(Blood measurement) {    // Adds a new measurement to the end of the patient's record.
            patient_record.push_back(measurement);
        }

        void printReport(std::string name) {    // Prints the report belonging to a given patient.
            std::cout << "—————————— " << name << "'s Report ——————————" << std::endl;

            Blood highest_measurement = patient_record.at(0);    // Initializes a new Blood object to facilitate the comparison of a patient's records.
            std::vector<Blood> list_highest_measurements;    // Creates a new vector to store a patient's highest systolic pressure measurements.
            list_highest_measurements.push_back(highest_measurement);
            int diastolic_sum = 0;

            for (int i = 0; i < patient_record.size(); i++) {    // Iterates through the patient's record to get their highest systolic values. It also calculates their average diastolic value.
                Blood temp = patient_record.at(i); // Creates a temporary Blood object for the purposes of comparison.
                diastolic_sum += temp.diastolic;

                if (temp.systolic > 140 && temp.systolic >= highest_measurement.systolic) {

                    if (highest_measurement.systolic == temp.systolic) {    // Checks if the value is the same as that of the current highest measure. It then just stores the value in the list.
                        list_highest_measurements.push_back(temp);
                    }

                    else {    // If the value is larger, then it replaces the values which are currently in the list.
                        highest_measurement = temp;

                        while (list_highest_measurements.size() != 0) {
                            list_highest_measurements.pop_back();
                        }

                        list_highest_measurements.push_back(temp);
                    }
                }
            }

            int average = diastolic_sum/patient_record.size();

            if (highest_measurement.systolic < 140) {    // Prints out the values that we have found.
                std::cout << "\nNone of the measurements that have been taken were too high." << std::endl;
            }

            else {
                std::cout << "\nThe highest abnormal systolic value was " << highest_measurement.systolic << ".\n" << std::endl;
                std::cout << "The corresponding diastolic value was " << highest_measurement.diastolic << ".\n" << std::endl;
                std::cout << "These measurements were taken on " << highest_measurement.date.month << "/" << highest_measurement.date.day << "/" << highest_measurement.date.year << ".\n" << std::endl;
                std::cout << "The list of highest abnormal systolic values includes the following pressure measurements:" << std::endl;

                for (int i = 0; i < list_highest_measurements.size(); i++) { // Iteratively prints out the elements of the "highest measurement" list. All the values printed should be the same.
                    std::cout << list_highest_measurements.at(i).systolic << std::endl;
                }
            }

            std::cout << "\nThe average diastolic value was " << average << ".\n" << std::endl;
        }
    };

int main() {
    Patient mary("Mary");    // First, we'll create a patient named "Mary" with the following record.
    mary.addRecord(Blood(94,61, Date(2,5,2013)));
    mary.addRecord(Blood(97,65, Date(3,5,2013)));
    mary.addRecord(Blood(144,99, Date(4,5,2013)));
    mary.addRecord(Blood(123,88, Date(5,5,2013)));
    mary.addRecord(Blood(177,110, Date(6,5,2013)));
    mary.addRecord(Blood(145,89, Date(7,5,2013)));
    mary.printReport(mary.patient_name);

    Patient john("John");    // Next, we'll create a patient named "John" with the following record.
    john.addRecord(Blood(88,57, Date(15,5,2013)));
    john.addRecord(Blood(95,61, Date(16,5,2013)));
    john.addRecord(Blood(144,80, Date(17,5,2013)));
    john.addRecord(Blood(151,96, Date(18,5,2013)));
    john.addRecord(Blood(176,104, Date(19,5,2013)));
    john.addRecord(Blood(176,110, Date(20,5,2013)));
    john.printReport(john.patient_name);

    return 0;
}