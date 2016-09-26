# BUG LOG

There isnt any code to update the FIELD_DIMENSION if the overload constructor is called with the new dimensions; this causes issues with the is_indounds function.
