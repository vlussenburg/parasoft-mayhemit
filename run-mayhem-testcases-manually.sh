#!/bin/bash

for testcase in testsuite/*; do
	build/mayhemit ${testcase}
done
