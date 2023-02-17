#!/bin/bash

for testcase in testsuite/*; do
	cat ${testcase} > build/mayhemit
done
