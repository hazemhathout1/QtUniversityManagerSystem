# UniversityManagementSystem

## Description

UniversityManagementSystem is a comprehensive application designed to manage various administrative tasks within a university. Built using C++ and Qt for the graphical user interface, and SQLite for the database, this system streamlines the management of students, courses, and enrollments. The project is divided into two main sections: admin and user. The admin section allows for adding and updating student data, managing courses, and handling enrollments. The user section enables students to view their information and courses.

## Features

- **Admin Panel**:
  - Add, update, and delete student records.
  - Manage courses, including adding new courses and updating existing ones.
  - Handle student enrollments and assign grades.
  
- **User Panel**:
  - View personal information and enrolled courses.
  
- **Database**:
  - SQLite database with five main tables: Admin, Students, Courses, Enrollment, and Majors.
  - Support for four majors: Electrical, Communication and Computer, Civil, and Architecture.

## Installation

1. **Clone the repository**:
   ```bash
   git clone https://github.com/yourusername/UniversityManagementSystem.git
   cd UniversityManagementSystem
2. **Setup Database**:
   The project includes an SQLite database file (universityManagementSystem.db). Ensure it is in the project directory.

   ## Usage
   **Admin Panel**:
   1. Login as an admin.
   2. Manage Students: Add, update, or delete student records.
   3. Manage Courses: Add new courses or update existing ones.
   4. Handle Enrollments: Enroll students in courses and assign grades.
  
   **User Panel**:
   1. Login as a student.
   2. View Information: See personal details and enrolled courses.
  
   ## Acknowledgements
   1. Qt for the GUI framework.
   2. SQLite for the database engine.
