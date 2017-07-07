
FUNCTION random : INT
END_FUNCTION

FUNCTION rand_interval : UDINT (*TODO: Add your comment here*) (*$GROUP=User,$CAT=User,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		min : UDINT;
		max : UDINT;
	END_VAR
END_FUNCTION

FUNCTION_BLOCK RandomValue
	VAR_OUTPUT
		BOOL_ : BOOL := 0;
		SINT_ : SINT := 0;
		USINT_ : USINT := 0;
		INT_ : INT := 0;
		REAL_ : REAL := 0;
		STRING_ : STRING[12] := '0';
	END_VAR
END_FUNCTION_BLOCK
