#include "calc.h"

#include <maya/MFnPlugin.h>

MStatus initializePlugin(MObject obj) {
	MStatus stat;

	MFnPlugin fnPlugin(obj, "Altnoi", "0.0", "Any");

	stat = fnPlugin.registerNode(
		"absCalc",
		AbsCalcNode::id,
		AbsCalcNode::creator,
		AbsCalcNode::initialize);
	CHECK_MSTATUS_AND_RETURN_IT(stat);

	stat = fnPlugin.registerNode(
		"acosCalc",
		AcosCalcNode::id,
		AcosCalcNode::creator,
		AcosCalcNode::initialize);
	CHECK_MSTATUS_AND_RETURN_IT(stat);

	stat = fnPlugin.registerNode(
		"asinCalc",
		AsinCalcNode::id,
		AsinCalcNode::creator,
		AsinCalcNode::initialize);
	CHECK_MSTATUS_AND_RETURN_IT(stat);

	stat = fnPlugin.registerNode(
		"atanCalc",
		AtanCalcNode::id,
		AtanCalcNode::creator,
		AtanCalcNode::initialize);
	CHECK_MSTATUS_AND_RETURN_IT(stat);

	stat = fnPlugin.registerNode(
		"cosCalc",
		cosCalcNode::id,
		cosCalcNode::creator,
		cosCalcNode::initialize);
	CHECK_MSTATUS_AND_RETURN_IT(stat);

	stat = fnPlugin.registerNode(
		"sinCalc",
		sinCalcNode::id,
		sinCalcNode::creator,
		sinCalcNode::initialize);
	CHECK_MSTATUS_AND_RETURN_IT(stat);

	stat = fnPlugin.registerNode(
		"tanCalc",
		tanCalcNode::id,
		tanCalcNode::creator,
		tanCalcNode::initialize);
	CHECK_MSTATUS_AND_RETURN_IT(stat);

	stat = fnPlugin.registerNode(
		"atan2Calc",
		Atan2CalcNode::id,
		Atan2CalcNode::creator,
		Atan2CalcNode::initialize);
	CHECK_MSTATUS_AND_RETURN_IT(stat);

	return MS::kSuccess;
}

MStatus uninitializePlugin(MObject obj) {
	MStatus status;

	MFnPlugin fnPlugin(obj, "Altnoi", "0.0", "Any");

	status = fnPlugin.deregisterCommand("absCalc");
	CHECK_MSTATUS_AND_RETURN_IT(status);

	status = fnPlugin.deregisterCommand("acosCalc");
	CHECK_MSTATUS_AND_RETURN_IT(status);

	status = fnPlugin.deregisterCommand("asinCalc");
	CHECK_MSTATUS_AND_RETURN_IT(status);

	status = fnPlugin.deregisterCommand("atanCalc");
	CHECK_MSTATUS_AND_RETURN_IT(status);

	status = fnPlugin.deregisterCommand("cosCalc");
	CHECK_MSTATUS_AND_RETURN_IT(status);

	status = fnPlugin.deregisterCommand("sinCalc");
	CHECK_MSTATUS_AND_RETURN_IT(status);

	status = fnPlugin.deregisterCommand("tanCalc");
	CHECK_MSTATUS_AND_RETURN_IT(status);

	status = fnPlugin.deregisterCommand("tan2Calc");
	CHECK_MSTATUS_AND_RETURN_IT(status);

	return MS::kSuccess;
}