.PHONY: clean All

All:
	@echo "==========Building project:[ 9WeatherProgram - Debug ]=========="
	@cd "9WeatherProgram" && "$(MAKE)" -f  "9WeatherProgram.mk"
clean:
	@echo "==========Cleaning project:[ 9WeatherProgram - Debug ]----------"
	@cd "9WeatherProgram" && "$(MAKE)" -f  "9WeatherProgram.mk" clean
