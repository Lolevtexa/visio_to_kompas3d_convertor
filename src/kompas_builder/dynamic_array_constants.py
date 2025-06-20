# dynamic_array_constants.py

"""
Dynamic array type constants for Kompas API.
Correspond to StructType2D dynamic arrays returned by GetParamStruct.
"""

# CHAR_STR_ARR: dynamic array of ksChar255 interfaces or strings
CHAR_STR_ARR = 1

# POINT_ARR: dynamic array of ksMathPointParam interfaces or MathPointParam structs
POINT_ARR = 2

# CURVE_PATTERN_ARR: dynamic array of ksCurvePattern interfaces or CurvePattern structs
CURVE_PATTERN_ARR = 2

# TEXT_LINE_ARR: dynamic array of ksTextLineParam interfaces or TextLineParam structs
TEXT_LINE_ARR = 3

# TEXT_ITEM_ARR: dynamic array of ksTextItemParam interfaces or TextItemParam structs
TEXT_ITEM_ARR = 4

# ATTR_COLUMN_ARR: dynamic array of ksColumnInfoParam interfaces or ColumnInfoParam structs
ATTR_COLUMN_ARR = 5

# USER_ARR: user-defined dynamic array
USER_ARR = 6

# POLYLINE_ARR: dynamic array of dynamic arrays of POINT_ARR
POLYLINE_ARR = 7

# RECT_ARR: dynamic array of ksRectParam interfaces or RectParam structs
RECT_ARR = 8

# LIBRARY_STYLE_ARR: dynamic array of ksLibraryStyleParam interfaces or LibraryStyleParam structs
LIBRARY_STYLE_ARR = 9

# VARIABLE_ARR: dynamic array of ksVariable interfaces or VariableParam structs
VARIABLE_ARR = 10

# CURVE_PATTERN_ARR_EX: dynamic array of ksCurvePattern interfaces or CurvePatternEx structs
CURVE_PATTERN_ARR_EX = 11

# LIBRARY_ATTR_TYPE_ARR: dynamic array of ksLibraryAttrTypeParam interfaces or LibraryAttrTypeParam structs
LIBRARY_ATTR_TYPE_ARR = 12

# NURBS_POINT_ARR: dynamic array of ksNurbsPointParam interfaces or NurbsPointParam structs
NURBS_POINT_ARR = 13

# DOUBLE_ARR: dynamic array of ksDoubleValue interfaces or double values
DOUBLE_ARR = 14

# CONSTRAINT_ARR: dynamic array of ksConstraintParam interfaces or ConstraintParam structs
CONSTRAINT_ARR = 15

# CORNER_ARR: dynamic array of ksCornerParam interfaces or CornerParam structs
CORNER_ARR = 16

# DOC_SPCOBJ_ARR: dynamic array of ksDocAttachedSpcParam interfaces or DocAttachedSpcParam structs
DOC_SPCOBJ_ARR = 17

# SPCSUBSECTION_ARR: dynamic array of ksSpcSubSectionParam interfaces or SpcSubSectionParam structs
SPCSUBSECTION_ARR = 18

# SPCTUNINGSEC_ARR: dynamic array of ksSpcTuningSectionParam interfaces or SpcTuningSectionParam structs
SPCTUNINGSEC_ARR = 19

# SPCSTYLECOLUMN_ARR: dynamic array of ksSpcStyleColumnParam interfaces or SpcStyleColumnParam structs
SPCSTYLECOLUMN_ARR = 20

# SPCSTYLESEC_ARR: dynamic array of ksSpcStyleSectionParam interfaces or SpcStyleSectionParam structs
SPCSTYLESEC_ARR = 21

# QUALITYITEM_ARR: dynamic array of ksQualityItemParam interfaces or QualityItemParam structs
QUALITYITEM_ARR = 22

# LTVARIANT_ARR: dynamic array of ksLtVariant interfaces or LtVariant structs
LTVARIANT_ARR = 23

# TOLERANCEBRANCH_ARR: dynamic array of ksToleranceBranch interfaces or ToleranceBranch structs
TOLERANCEBRANCH_ARR = 24

# HATCHLINE_ARR: dynamic array of ksHatchLineParam interfaces or HatchLineParam structs
HATCHLINE_ARR = 25

# TREENODEPARAM_ARR: dynamic array of ksTreeNodeParam interfaces or TreeNodeParam structs
TREENODEPARAM_ARR = 26

# CHAR_STR_ARR_W: Unicode string array
CHAR_STR_ARR_W = 27  # dynamic array of Unicode strings (WSTR)
