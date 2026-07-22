#pragma once

struct PhysFeModelDesc_t  // sizeof 0x6F8, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    CUtlVector< uint32 > m_CtrlHash; // offset 0x0, size 0x18, align 8
    CUtlVector< CUtlString > m_CtrlName; // offset 0x18, size 0x18, align 8
    uint32 m_nStaticNodeFlags; // offset 0x30, size 0x4, align 4
    uint32 m_nDynamicNodeFlags; // offset 0x34, size 0x4, align 4
    float32 m_flLocalForce; // offset 0x38, size 0x4, align 4
    float32 m_flLocalRotation; // offset 0x3C, size 0x4, align 4
    uint16 m_nNodeCount; // offset 0x40, size 0x2, align 2
    uint16 m_nStaticNodes; // offset 0x42, size 0x2, align 2
    uint16 m_nRotLockStaticNodes; // offset 0x44, size 0x2, align 2
    uint16 m_nFirstPositionDrivenNode; // offset 0x46, size 0x2, align 2
    uint16 m_nSimdTriCount1; // offset 0x48, size 0x2, align 2
    uint16 m_nSimdTriCount2; // offset 0x4A, size 0x2, align 2
    uint16 m_nSimdQuadCount1; // offset 0x4C, size 0x2, align 2
    uint16 m_nSimdQuadCount2; // offset 0x4E, size 0x2, align 2
    uint16 m_nQuadCount1; // offset 0x50, size 0x2, align 2
    uint16 m_nQuadCount2; // offset 0x52, size 0x2, align 2
    uint16 m_nTreeDepth; // offset 0x54, size 0x2, align 2
    uint16 m_nNodeBaseJiggleboneDependsCount; // offset 0x56, size 0x2, align 2
    uint16 m_nRopeCount; // offset 0x58, size 0x2, align 2
    char _pad_005A[0x6]; // offset 0x5A
    CUtlVector< uint16 > m_Ropes; // offset 0x60, size 0x18, align 8
    CUtlVector< FeNodeBase_t > m_NodeBases; // offset 0x78, size 0x18, align 8
    CUtlVector< FeSimdNodeBase_t > m_SimdNodeBases; // offset 0x90, size 0x18, align 8
    CUtlVector< FeQuad_t > m_Quads; // offset 0xA8, size 0x18, align 8
    CUtlVector< FeSimdQuad_t > m_SimdQuads; // offset 0xC0, size 0x18, align 8
    CUtlVector< FeSimdTri_t > m_SimdTris; // offset 0xD8, size 0x18, align 8
    CUtlVector< FeSimdRodConstraint_t > m_SimdRods; // offset 0xF0, size 0x18, align 8
    CUtlVector< FeSimdRodConstraintAnim_t > m_SimdRodsAnim; // offset 0x108, size 0x18, align 8
    CUtlVector< CTransform > m_InitPose; // offset 0x120, size 0x18, align 8
    CUtlVector< FeRodConstraint_t > m_Rods; // offset 0x138, size 0x18, align 8
    CUtlVector< FeTwistConstraint_t > m_Twists; // offset 0x150, size 0x18, align 8
    CUtlVector< FeHingeLimit_t > m_HingeLimits; // offset 0x168, size 0x18, align 8
    CUtlVector< uint32 > m_AntiTunnelBytecode; // offset 0x180, size 0x18, align 8
    CUtlVector< FeDynKinLink_t > m_DynKinLinks; // offset 0x198, size 0x18, align 8
    CUtlVector< FeBoneMergeLink_t > m_BoneMergeLinks; // offset 0x1B0, size 0x18, align 8
    CUtlVector< FeAntiTunnelProbe_t > m_AntiTunnelProbes; // offset 0x1C8, size 0x18, align 8
    CUtlVector< uint16 > m_AntiTunnelTargetNodes; // offset 0x1E0, size 0x18, align 8
    CUtlVector< FeNodeStrayBox_t > m_NodeStrayBoxes; // offset 0x1F8, size 0x18, align 8
    CUtlVector< FeAxialEdgeBend_t > m_AxialEdges; // offset 0x210, size 0x18, align 8
    CUtlVector< float32 > m_NodeInvMasses; // offset 0x228, size 0x18, align 8
    CUtlVector< FeCtrlOffset_t > m_CtrlOffsets; // offset 0x240, size 0x18, align 8
    CUtlVector< FeCtrlOsOffset_t > m_CtrlOsOffsets; // offset 0x258, size 0x18, align 8
    CUtlVector< FeFollowNode_t > m_FollowNodes; // offset 0x270, size 0x18, align 8
    CUtlVector< FeCollisionPlane_t > m_CollisionPlanes; // offset 0x288, size 0x18, align 8
    CUtlVector< FeNodeIntegrator_t > m_NodeIntegrator; // offset 0x2A0, size 0x18, align 8
    CUtlVector< FeSpringIntegrator_t > m_SpringIntegrator; // offset 0x2B8, size 0x18, align 8
    CUtlVector< FeSimdSpringIntegrator_t > m_SimdSpringIntegrator; // offset 0x2D0, size 0x18, align 8
    CUtlVector< FeWorldCollisionParams_t > m_WorldCollisionParams; // offset 0x2E8, size 0x18, align 8
    CUtlVector< float32 > m_LegacyStretchForce; // offset 0x300, size 0x18, align 8
    CUtlVector< float32 > m_NodeCollisionRadii; // offset 0x318, size 0x18, align 8
    CUtlVector< float32 > m_DynNodeFriction; // offset 0x330, size 0x18, align 8
    CUtlVector< float32 > m_LocalRotation; // offset 0x348, size 0x18, align 8
    CUtlVector< float32 > m_LocalForce; // offset 0x360, size 0x18, align 8
    CUtlVector< FeTaperedCapsuleStretch_t > m_TaperedCapsuleStretches; // offset 0x378, size 0x18, align 8
    CUtlVector< FeTaperedCapsuleRigid_t > m_TaperedCapsuleRigids; // offset 0x390, size 0x18, align 8
    CUtlVector< FeSphereRigid_t > m_SphereRigids; // offset 0x3A8, size 0x18, align 8
    CUtlVector< uint16 > m_WorldCollisionNodes; // offset 0x3C0, size 0x18, align 8
    CUtlVector< uint16 > m_TreeParents; // offset 0x3D8, size 0x18, align 8
    CUtlVector< uint16 > m_TreeCollisionMasks; // offset 0x3F0, size 0x18, align 8
    CUtlVector< FeTreeChildren_t > m_TreeChildren; // offset 0x408, size 0x18, align 8
    CUtlVector< uint16 > m_FreeNodes; // offset 0x420, size 0x18, align 8
    CUtlVector< FeFitMatrix_t > m_FitMatrices; // offset 0x438, size 0x18, align 8
    CUtlVector< FeFitWeight_t > m_FitWeights; // offset 0x450, size 0x18, align 8
    CUtlVector< FeNodeReverseOffset_t > m_ReverseOffsets; // offset 0x468, size 0x18, align 8
    CUtlVector< FeAnimStrayRadius_t > m_AnimStrayRadii; // offset 0x480, size 0x18, align 8
    CUtlVector< FeSimdAnimStrayRadius_t > m_SimdAnimStrayRadii; // offset 0x498, size 0x18, align 8
    CUtlVector< FeKelagerBend2_t > m_KelagerBends; // offset 0x4B0, size 0x18, align 8
    CUtlVector< FeCtrlSoftOffset_t > m_CtrlSoftOffsets; // offset 0x4C8, size 0x18, align 8
    CUtlVector< CFeIndexedJiggleBone > m_JiggleBones; // offset 0x4E0, size 0x18, align 8
    CUtlVector< uint16 > m_SourceElems; // offset 0x4F8, size 0x18, align 8
    CUtlVector< uint32 > m_GoalDampedSpringIntegrators; // offset 0x510, size 0x18, align 8
    CUtlVector< FeTri_t > m_Tris; // offset 0x528, size 0x18, align 8
    uint16 m_nTriCount1; // offset 0x540, size 0x2, align 2
    uint16 m_nTriCount2; // offset 0x542, size 0x2, align 2
    uint8 m_nReservedUint8; // offset 0x544, size 0x1, align 1
    uint8 m_nExtraPressureIterations; // offset 0x545, size 0x1, align 1
    uint8 m_nExtraGoalIterations; // offset 0x546, size 0x1, align 1
    uint8 m_nExtraIterations; // offset 0x547, size 0x1, align 1
    CUtlVector< FeSDFRigid_t > m_SDFRigids; // offset 0x548, size 0x18, align 8
    CUtlVector< FeBoxRigid_t > m_BoxRigids; // offset 0x560, size 0x18, align 8
    CUtlVector< uint8 > m_DynNodeVertexSet; // offset 0x578, size 0x18, align 8
    CUtlVector< uint32 > m_VertexSetNames; // offset 0x590, size 0x18, align 8
    CUtlVector< FeRigidColliderIndices_t > m_RigidColliderPriorities; // offset 0x5A8, size 0x18, align 8
    CUtlVector< FeMorphLayerDepr_t > m_MorphLayers; // offset 0x5C0, size 0x18, align 8
    CUtlVector< uint8 > m_MorphSetData; // offset 0x5D8, size 0x18, align 8
    CUtlVector< FeVertexMapDesc_t > m_VertexMaps; // offset 0x5F0, size 0x18, align 8
    CUtlVector< uint8 > m_VertexMapValues; // offset 0x608, size 0x18, align 8
    CUtlVector< FeEffectDesc_t > m_Effects; // offset 0x620, size 0x18, align 8
    CUtlVector< FeCtrlOffset_t > m_LockToParent; // offset 0x638, size 0x18, align 8
    CUtlVector< uint16 > m_LockToGoal; // offset 0x650, size 0x18, align 8
    CUtlVector< int16 > m_SkelParents; // offset 0x668, size 0x18, align 8
    CUtlVector< FeNodeWindBase_t > m_DynNodeWindBases; // offset 0x680, size 0x18, align 8
    CUtlVector< FeModelSelfCollisionLayer_t > m_SelfCollisionLayers; // offset 0x698, size 0x18, align 8
    float32 m_flInternalPressure; // offset 0x6B0, size 0x4, align 4
    float32 m_flDefaultTimeDilation; // offset 0x6B4, size 0x4, align 4
    float32 m_flWindage; // offset 0x6B8, size 0x4, align 4
    float32 m_flWindDrag; // offset 0x6BC, size 0x4, align 4
    float32 m_flDefaultSurfaceStretch; // offset 0x6C0, size 0x4, align 4
    float32 m_flDefaultThreadStretch; // offset 0x6C4, size 0x4, align 4
    float32 m_flDefaultGravityScale; // offset 0x6C8, size 0x4, align 4
    float32 m_flDefaultVelAirDrag; // offset 0x6CC, size 0x4, align 4
    float32 m_flDefaultExpAirDrag; // offset 0x6D0, size 0x4, align 4
    float32 m_flDefaultVelQuadAirDrag; // offset 0x6D4, size 0x4, align 4
    float32 m_flDefaultExpQuadAirDrag; // offset 0x6D8, size 0x4, align 4
    float32 m_flRodVelocitySmoothRate; // offset 0x6DC, size 0x4, align 4
    float32 m_flQuadVelocitySmoothRate; // offset 0x6E0, size 0x4, align 4
    float32 m_flAddWorldCollisionRadius; // offset 0x6E4, size 0x4, align 4
    float32 m_flDefaultVolumetricSolveAmount; // offset 0x6E8, size 0x4, align 4
    float32 m_flMotionSmoothCDT; // offset 0x6EC, size 0x4, align 4
    float32 m_flLocalDrag1; // offset 0x6F0, size 0x4, align 4
    uint16 m_nRodVelocitySmoothIterations; // offset 0x6F4, size 0x2, align 2
    uint16 m_nQuadVelocitySmoothIterations; // offset 0x6F6, size 0x2, align 2
};
