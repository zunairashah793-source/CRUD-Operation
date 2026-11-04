        return;
    }

    for (int j = 0; j < count; j++)
    {
        if (numbers[j] == oldNumber)
        {
            int newNumber;
            if (!readInteger("Enter the replacement number: ", newNumber))
            {
                return;
            }

            numbers[j] = newNumber;
            cout << "Number updated successfully.\n";
            return; // Updates the first matching occurrence.
        }
    }

    cout << "Number not found. Nothing was updated.\n";
}

void deleteNumber(int numbers[], int& count)
{
    if (count == 0)
    {
        cout << "The list is empty. Add a number first.\n";
        return;
    }

    int target;
    if (!readInteger("Enter the number you want to delete: ", target))
    {
        return;
    }

    for (int j = 0; j < count; j++)
    {
        if (numbers[j] == target)
        {
            // Shift every element after the deleted number one place to the left.
            for (int k = j; k < count - 1; k++)
            {
                numbers[k] = numbers[k + 1];
            }

            count--;
            cout << "Number deleted successfully.\n";
            return; // Deletes the first matching occurrence.
        }
    }

    cout << "Number not found. Nothing was deleted.\n";
}

void showNumbers(const int numbers[], int count)
{
    if (count == 0)
    {
        cout << "The list is empty.\n";
        return;
    }

    cout << "\nStored numbers:\n";

    for (int j = 0; j < count; j++)
    {
        cout << j + 1 << ". " << numbers[j] << '\n';
    }
}

int main()
{
    int numbers[MAX_SIZE];
    int count = 0;

    while (true)
    {
        cout << "\n========== ARRAY CRUD MENU ==========\n";
        cout << "1. Add a number\n";
        cout << "2. Search for a number\n";
        cout << "3. Delete a number\n";
        cout << "4. Update a number\n";
        cout << "5. Show all numbers\n";
        cout << "6. Exit\n";
        cout << "=====================================\n";

        int choice;
        if (!readInteger("Enter your choice: ", choice))
        {
            cout << "\nInput ended. Program closed.\n";
            break;
        }

        switch (choice)
        {
            case 1:
                addNumber(numbers, count);
                break;

            case 2:
                searchNumber(numbers, count);
                break;

            case 3:
                deleteNumber(numbers, count);
                break;

            case 4:
                updateNumber(numbers, count);
                break;

            case 5:
                showNumbers(numbers, count);
                break;

            case 6:
                cout << "Exiting program. Goodbye!\n";
                return 0;

            default:
                cout << "Invalid choice. Please select a number from 1 to 6.\n";
        }
    }

    return 0;
}
