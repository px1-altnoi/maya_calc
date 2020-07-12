#include "calc.h"

MTypeId AbsCalcNode::id(0x00000234);
MObject AbsCalcNode::aOutValue;
MObject AbsCalcNode::aInValue;

AbsCalcNode::AbsCalcNode() {

}

AbsCalcNode::~AbsCalcNode() {

}

void* AbsCalcNode::creator() {
	return new AbsCalcNode();
}

MStatus AbsCalcNode::compute(const MPlug& plug, MDataBlock& data) {
	MStatus stat;

	if (plug != aOutValue) {
		return MS::kUnknownParameter;
	}

	float inputValue = data.inputValue(aInValue, &stat).asFloat();

	float output = abs(inputValue);

	MDataHandle hOUtput = data.outputValue(aOutValue, &stat);
	CHECK_MSTATUS_AND_RETURN_IT(stat);
	hOUtput.setFloat(output);
	hOUtput.setClean();
	data.setClean(plug);

	return MS::kSuccess;
}

MStatus AbsCalcNode::initialize() {
	MStatus stat;

	MFnNumericAttribute nAttr;

	aOutValue = nAttr.create("outvalue", "outvalue", MFnNumericData::kFloat);
	nAttr.setWritable(false);
	nAttr.setStorable(false);
	addAttribute(aOutValue);

	aInValue = nAttr.create("input", "input", MFnNumericData::kFloat);
	nAttr.setKeyable(true);
	addAttribute(aInValue);
	attributeAffects(aInValue, aOutValue);

	return MS::kSuccess;
}

MTypeId AcosCalcNode::id(0x00000235);
MObject AcosCalcNode::aOutValue;
MObject AcosCalcNode::aInValue;

AcosCalcNode::AcosCalcNode() {

}

AcosCalcNode::~AcosCalcNode() {

}

void* AcosCalcNode::creator() {
	return new AcosCalcNode();
}

MStatus AcosCalcNode::compute(const MPlug& plug, MDataBlock& data) {
	MStatus stat;

	if (plug != aOutValue) {
		return MS::kUnknownParameter;
	}

	float inputValue = data.inputValue(aInValue, &stat).asFloat();

	float output = acos(inputValue);

	MDataHandle hOUtput = data.outputValue(aOutValue, &stat);
	CHECK_MSTATUS_AND_RETURN_IT(stat);
	hOUtput.setFloat(output);
	hOUtput.setClean();
	data.setClean(plug);

	return MS::kSuccess;
}

MStatus AcosCalcNode::initialize() {
	MStatus stat;

	MFnNumericAttribute nAttr;

	aOutValue = nAttr.create("outvalue", "outvalue", MFnNumericData::kFloat);
	nAttr.setWritable(false);
	nAttr.setStorable(false);
	addAttribute(aOutValue);

	aInValue = nAttr.create("input", "input", MFnNumericData::kFloat);
	nAttr.setKeyable(true);
	addAttribute(aInValue);
	attributeAffects(aInValue, aOutValue);

	return MS::kSuccess;
}

MTypeId AsinCalcNode::id(0x00000236);
MObject AsinCalcNode::aOutValue;
MObject AsinCalcNode::aInValue;

AsinCalcNode::AsinCalcNode() {

}

AsinCalcNode::~AsinCalcNode() {

}

void* AsinCalcNode::creator() {
	return new AsinCalcNode();
}

MStatus AsinCalcNode::compute(const MPlug& plug, MDataBlock& data) {
	MStatus stat;

	if (plug != aOutValue) {
		return MS::kUnknownParameter;
	}

	float inputValue = data.inputValue(aInValue, &stat).asFloat();

	float output = asin(inputValue);

	MDataHandle hOUtput = data.outputValue(aOutValue, &stat);
	CHECK_MSTATUS_AND_RETURN_IT(stat);
	hOUtput.setFloat(output);
	hOUtput.setClean();
	data.setClean(plug);

	return MS::kSuccess;
}

MStatus AsinCalcNode::initialize() {
	MStatus stat;

	MFnNumericAttribute nAttr;

	aOutValue = nAttr.create("outvalue", "outvalue", MFnNumericData::kFloat);
	nAttr.setWritable(false);
	nAttr.setStorable(false);
	addAttribute(aOutValue);

	aInValue = nAttr.create("input", "input", MFnNumericData::kFloat);
	nAttr.setKeyable(true);
	addAttribute(aInValue);
	attributeAffects(aInValue, aOutValue);

	return MS::kSuccess;
}

MTypeId AtanCalcNode::id(0x00000237);
MObject AtanCalcNode::aOutValue;
MObject AtanCalcNode::aInValue;

AtanCalcNode::AtanCalcNode() {

}

AtanCalcNode::~AtanCalcNode() {

}

void* AtanCalcNode::creator() {
	return new AtanCalcNode();
}

MStatus AtanCalcNode::compute(const MPlug& plug, MDataBlock& data) {
	MStatus stat;

	if (plug != aOutValue) {
		return MS::kUnknownParameter;
	}

	float inputValue = data.inputValue(aInValue, &stat).asFloat();

	float output = atan(inputValue);

	MDataHandle hOUtput = data.outputValue(aOutValue, &stat);
	CHECK_MSTATUS_AND_RETURN_IT(stat);
	hOUtput.setFloat(output);
	hOUtput.setClean();
	data.setClean(plug);

	return MS::kSuccess;
}

MStatus AtanCalcNode::initialize() {
	MStatus stat;

	MFnNumericAttribute nAttr;

	aOutValue = nAttr.create("outvalue", "outvalue", MFnNumericData::kFloat);
	nAttr.setWritable(false);
	nAttr.setStorable(false);
	addAttribute(aOutValue);

	aInValue = nAttr.create("input", "input", MFnNumericData::kFloat);
	nAttr.setKeyable(true);
	addAttribute(aInValue);
	attributeAffects(aInValue, aOutValue);

	return MS::kSuccess;
}

MTypeId cosCalcNode::id(0x00000238);
MObject cosCalcNode::aOutValue;
MObject cosCalcNode::aInValue;

cosCalcNode::cosCalcNode() {

}

cosCalcNode::~cosCalcNode() {

}

void* cosCalcNode::creator() {
	return new cosCalcNode();
}

MStatus cosCalcNode::compute(const MPlug& plug, MDataBlock& data) {
	MStatus stat;

	if (plug != aOutValue) {
		return MS::kUnknownParameter;
	}

	float inputValue = data.inputValue(aInValue, &stat).asFloat();

	float output = cos(inputValue);

	MDataHandle hOUtput = data.outputValue(aOutValue, &stat);
	CHECK_MSTATUS_AND_RETURN_IT(stat);
	hOUtput.setFloat(output);
	hOUtput.setClean();
	data.setClean(plug);

	return MS::kSuccess;
}

MStatus cosCalcNode::initialize() {
	MStatus stat;

	MFnNumericAttribute nAttr;

	aOutValue = nAttr.create("outvalue", "outvalue", MFnNumericData::kFloat);
	nAttr.setWritable(false);
	nAttr.setStorable(false);
	addAttribute(aOutValue);

	aInValue = nAttr.create("input", "input", MFnNumericData::kFloat);
	nAttr.setKeyable(true);
	addAttribute(aInValue);
	attributeAffects(aInValue, aOutValue);

	return MS::kSuccess;
}

MTypeId sinCalcNode::id(0x00000239);
MObject sinCalcNode::aOutValue;
MObject sinCalcNode::aInValue;

sinCalcNode::sinCalcNode() {

}

sinCalcNode::~sinCalcNode() {

}

void* sinCalcNode::creator() {
	return new sinCalcNode();
}

MStatus sinCalcNode::compute(const MPlug& plug, MDataBlock& data) {
	MStatus stat;

	if (plug != aOutValue) {
		return MS::kUnknownParameter;
	}

	float inputValue = data.inputValue(aInValue, &stat).asFloat();

	float output = sin(inputValue);

	MDataHandle hOUtput = data.outputValue(aOutValue, &stat);
	CHECK_MSTATUS_AND_RETURN_IT(stat);
	hOUtput.setFloat(output);
	hOUtput.setClean();
	data.setClean(plug);

	return MS::kSuccess;
}

MStatus sinCalcNode::initialize() {
	MStatus stat;

	MFnNumericAttribute nAttr;

	aOutValue = nAttr.create("outvalue", "outvalue", MFnNumericData::kFloat);
	nAttr.setWritable(false);
	nAttr.setStorable(false);
	addAttribute(aOutValue);

	aInValue = nAttr.create("input", "input", MFnNumericData::kFloat);
	nAttr.setKeyable(true);
	addAttribute(aInValue);
	attributeAffects(aInValue, aOutValue);

	return MS::kSuccess;
}

MTypeId tanCalcNode::id(0x00000240);
MObject tanCalcNode::aOutValue;
MObject tanCalcNode::aInValue;

tanCalcNode::tanCalcNode() {

}

tanCalcNode::~tanCalcNode() {

}

void* tanCalcNode::creator() {
	return new tanCalcNode();
}

MStatus tanCalcNode::compute(const MPlug& plug, MDataBlock& data) {
	MStatus stat;

	if (plug != aOutValue) {
		return MS::kUnknownParameter;
	}

	float inputValue = data.inputValue(aInValue, &stat).asFloat();

	float output = tan(inputValue);

	MDataHandle hOUtput = data.outputValue(aOutValue, &stat);
	CHECK_MSTATUS_AND_RETURN_IT(stat);
	hOUtput.setFloat(output);
	hOUtput.setClean();
	data.setClean(plug);

	return MS::kSuccess;
}

MStatus tanCalcNode::initialize() {
	MStatus stat;

	MFnNumericAttribute nAttr;

	aOutValue = nAttr.create("outvalue", "outvalue", MFnNumericData::kFloat);
	nAttr.setWritable(false);
	nAttr.setStorable(false);
	addAttribute(aOutValue);

	aInValue = nAttr.create("input", "input", MFnNumericData::kFloat);
	nAttr.setKeyable(true);
	addAttribute(aInValue);
	attributeAffects(aInValue, aOutValue);

	return MS::kSuccess;
}

MTypeId Atan2CalcNode::id(0x00000241);
MObject Atan2CalcNode::aOutValue;
MObject Atan2CalcNode::aInValue1;
MObject Atan2CalcNode::aInValue2;

Atan2CalcNode::Atan2CalcNode() {

}

Atan2CalcNode::~Atan2CalcNode() {

}

void* Atan2CalcNode::creator() {
	return new Atan2CalcNode();
}

MStatus Atan2CalcNode::compute(const MPlug& plug, MDataBlock& data) {
	MStatus stat;

	if (plug != aOutValue) {
		return MS::kUnknownParameter;
	}

	float inputValue1 = data.inputValue(aInValue1, &stat).asFloat();
	float inputValue2 = data.inputValue(aInValue2, &stat).asFloat();

	float output = atan2(inputValue1, inputValue2);

	MDataHandle hOUtput = data.outputValue(aOutValue, &stat);
	CHECK_MSTATUS_AND_RETURN_IT(stat);
	hOUtput.setFloat(output);
	hOUtput.setClean();
	data.setClean(plug);

	return MS::kSuccess;
}

MStatus Atan2CalcNode::initialize() {
	MStatus stat;

	MFnNumericAttribute nAttr;

	aOutValue = nAttr.create("outvalue", "outvalue", MFnNumericData::kFloat);
	nAttr.setWritable(false);
	nAttr.setStorable(false);
	addAttribute(aOutValue);

	aInValue1 = nAttr.create("input1", "input1", MFnNumericData::kFloat);
	nAttr.setKeyable(true);
	addAttribute(aInValue1);
	attributeAffects(aInValue1, aOutValue);

	aInValue2 = nAttr.create("input2", "input2", MFnNumericData::kFloat);
	nAttr.setKeyable(true);
	addAttribute(aInValue2);
	attributeAffects(aInValue2, aOutValue);

	return MS::kSuccess;
}