# Hospital Patient Priority Queue

## Challenge 09 – Data Structures and Algorithms using C

### Project Description

This project implements a simple **Hospital Patient Priority Queue** using C programming.

Patients are treated according to their priority:

- **Priority 1** – Emergency
- **Priority 2** – Urgent
- **Priority 3** – Routine

A patient with a higher priority is treated first. If two patients have the same priority, the patient who was added first is treated first.

## Features

- Add a new patient
- Assign priority to each patient
- Treat the highest-priority patient
- Maintain FIFO order for patients with the same priority
- Display the patient being treated
- Exit the program

## Test Data

| Patient | Priority |
|--------|----------|
| P1 | 3 |
| P2 | 1 |
| P3 | 2 |
| P4 | 1 |
| P5 | 3 |
| P6 | 2 |

### Treatment Order

P2 → P4 → P3 → P6 → P1 → P5

### Emergency Test

After treating 2–3 patients, a new Emergency patient (P7) with priority 1 is added.

The new treatment order becomes:

P2 → P4 → P7 → P3 → P6 → P1 → P5

This shows that Emergency patients are treated before Urgent and Routine patients.

## Programming Language

- C

## Functions Used

### `addPatient()`

Adds a patient's name and priority to the queue.

### `treatNext()`

Finds and treats the patient with the highest priority. The treated patient is then removed from the queue.

## How to Run

1. Compile the C program.
2. Run the program.
3. Select:
   - `1` to add a patient
   - `2` to treat the next patient
   - `3` to exit

## Conclusion

The program demonstrates how a priority queue can be used in a hospital system to ensure that Emergency patients are treated first while maintaining the order of arrival for patients with the same priority.
