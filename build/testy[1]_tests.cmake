add_test( Elevator.printVec /home/acad/Desktop/zadania/Zadanka/build/testy [==[--gtest_filter=Elevator.printVec]==] --gtest_also_run_disabled_tests)
set_tests_properties( Elevator.printVec PROPERTIES WORKING_DIRECTORY /home/acad/Desktop/zadania/Zadanka/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( Elevator.elevGoUpAndPassangerWantGoDownReturnOne /home/acad/Desktop/zadania/Zadanka/build/testy [==[--gtest_filter=Elevator.elevGoUpAndPassangerWantGoDownReturnOne]==] --gtest_also_run_disabled_tests)
set_tests_properties( Elevator.elevGoUpAndPassangerWantGoDownReturnOne PROPERTIES WORKING_DIRECTORY /home/acad/Desktop/zadania/Zadanka/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( Elevator.tryInitElevator /home/acad/Desktop/zadania/Zadanka/build/testy [==[--gtest_filter=Elevator.tryInitElevator]==] --gtest_also_run_disabled_tests)
set_tests_properties( Elevator.tryInitElevator PROPERTIES WORKING_DIRECTORY /home/acad/Desktop/zadania/Zadanka/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( testy_TESTS Elevator.printVec Elevator.elevGoUpAndPassangerWantGoDownReturnOne Elevator.tryInitElevator)
