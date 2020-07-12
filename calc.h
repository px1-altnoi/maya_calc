#ifndef CALC_H
#define CALC_H

#include <maya/MPxNode.h>
#include <maya/MFnNumericAttribute.h>

#include <cmath>

class AbsCalcNode : public MPxNode {
public:
	AbsCalcNode();
	virtual ~AbsCalcNode();
	static void* creator();

	virtual MStatus compute(const MPlug& plug, MDataBlock& data);
	static MStatus initialize();

	static MTypeId id;
	static MObject aOutValue;
	static MObject aInValue;
};

class AcosCalcNode : public MPxNode {
public:
	AcosCalcNode();
	virtual ~AcosCalcNode();
	static void* creator();

	virtual MStatus compute(const MPlug& plug, MDataBlock& data);
	static MStatus initialize();

	static MTypeId id;
	static MObject aOutValue;
	static MObject aInValue;
};

class AsinCalcNode : public MPxNode {
public:
	AsinCalcNode();
	virtual ~AsinCalcNode();
	static void* creator();

	virtual MStatus compute(const MPlug& plug, MDataBlock& data);
	static MStatus initialize();

	static MTypeId id;
	static MObject aOutValue;
	static MObject aInValue;
};

class AtanCalcNode : public MPxNode {
public:
	AtanCalcNode();
	virtual ~AtanCalcNode();
	static void* creator();

	virtual MStatus compute(const MPlug& plug, MDataBlock& data);
	static MStatus initialize();

	static MTypeId id;
	static MObject aOutValue;
	static MObject aInValue;
};

class cosCalcNode : public MPxNode {
public:
	cosCalcNode();
	virtual ~cosCalcNode();
	static void* creator();

	virtual MStatus compute(const MPlug& plug, MDataBlock& data);
	static MStatus initialize();

	static MTypeId id;
	static MObject aOutValue;
	static MObject aInValue;
};

class sinCalcNode : public MPxNode {
public:
	sinCalcNode();
	virtual ~sinCalcNode();
	static void* creator();

	virtual MStatus compute(const MPlug& plug, MDataBlock& data);
	static MStatus initialize();

	static MTypeId id;
	static MObject aOutValue;
	static MObject aInValue;
};

class tanCalcNode : public MPxNode {
public:
	tanCalcNode();
	virtual ~tanCalcNode();
	static void* creator();

	virtual MStatus compute(const MPlug& plug, MDataBlock& data);
	static MStatus initialize();

	static MTypeId id;
	static MObject aOutValue;
	static MObject aInValue;
};

class Atan2CalcNode : public MPxNode {
public:
	Atan2CalcNode();
	virtual ~Atan2CalcNode();
	static void* creator();

	virtual MStatus compute(const MPlug& plug, MDataBlock& data);
	static MStatus initialize();

	static MTypeId id;
	static MObject aOutValue;
	static MObject aInValue1;
	static MObject aInValue2;
};


#endif // !CALC_H
