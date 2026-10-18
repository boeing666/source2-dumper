#pragma once

class CAnimGraphDoc_AimCameraNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0xB0, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    CUtlString m_ikChain; // offset 0x48, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CUtlString m_cameraJointName; // offset 0x50, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CUtlString m_pelvisJointName; // offset 0x58, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CUtlString m_clavicleLeftJointName; // offset 0x60, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CUtlString m_clavicleRightJointName; // offset 0x68, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    AnimParamID m_parameterNamePosition; // offset 0x70, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    AnimParamID m_parameterNameOrientation; // offset 0x74, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    AnimParamID m_parameterNamePelvisOffset; // offset 0x78, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    AnimParamID m_parameterCameraOnly; // offset 0x7C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    AnimParamID m_parameterCameraClearanceDistance; // offset 0x80, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    AnimParamID m_parameterWeaponDepenetrationDistance; // offset 0x84, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    AnimParamID m_parameterWeaponDepenetrationDelta; // offset 0x88, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_008C[0x4]; // offset 0x8C
    CUtlString m_depenetrationJointName; // offset 0x90, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CUtlVector< CAnimGraphDoc_AimCameraNode_PropJoint > m_propJoints; // offset 0x98, size 0x18, align 8 | MPropertyFriendlyName MPropertyDescription
};
