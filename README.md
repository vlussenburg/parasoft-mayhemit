# Description

Example program integrating Mayhem and Parasoft Cpp. 

## Important files

- `CMakeLists.txt` Cmake build definition. This is leading, the `Makefile` is generated from this
- `Makefile` although generated from CMake, checked into SCM for CppTest to work okay.
- `Dockerfile` specifies the Docker container with the program Mayhem needs to generate test cases
- `Mayhemfile` specifies the parameters for the Mayhem job so Mayhem can generate test cases
- `mayhemit.c` the program we're fuzzing

## Generate unit case input
`build-container-run-mayhem-and-wait-for-testsuites.sh` this builds the container and kicks off a job in Mayhem. Note that parameters are needed, invoke the script to found out which.

It append the test cases to the `tests/autogenerated/test_mayhemit_mayhem.csv` file.

## Run coverage report
Run in order:
  - `build-instrumented-mayhemit.sh` builds a mayhemit binary that output coverage information via the CppTest CMake integration
  - `run-mayhem-testcases-manually.sh` executes the files in the `testsuites` directory
  - `coverage-report.sh` generates a coverage report from the `MayhemIt.clog` file that is appended to as the test cases in the previous step run

## Manual steps done to create this repository
- Install Parasoft CppTest (google) in `/home/ubuntu/cpptest`
- Activate license
- Create new project, import code, create build files
- Use CppTest to generate unit tests (follow Parasoft guides)
- Go to `TestSuite_mayhemit_c.c` in CppTest, right click, `Parasoft` > `Add unit test using using Wizard`.
<img width="1030" alt="image" src="https://user-images.githubusercontent.com/726645/219814297-3e4ccc2f-ac9a-4e4c-8f34-91d35a54f77b.png">

- Follow [this guide](https://docs.parasoft.com/display/CPPTESTPROEC20222/Exercise+12+-+Using+Data+Sources+in+Unit+Tests) to add data source which will appear in `tests/autogenerated/test_mayhemit_mayhem.csv`

- Whatever I forgot to document
- Done
