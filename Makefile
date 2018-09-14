.PHONY: clean All

All:
	@echo "----------Building project:[ InitialisingVariables - Debug ]----------"
	@cd "InitialisingVariables" && "$(MAKE)" -f  "InitialisingVariables.mk"
clean:
	@echo "----------Cleaning project:[ InitialisingVariables - Debug ]----------"
	@cd "InitialisingVariables" && "$(MAKE)" -f  "InitialisingVariables.mk" clean
