#pragma once

class CAnimGraphDoc_DampedPathMotor : public CAnimGraphDoc_PathMotorBase /*0x0*/  // sizeof 0x68, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x38]; // offset 0x0
    float32 m_flAnticipationTime; // offset 0x38, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMinSpeedScale; // offset 0x3C, size 0x4, align 4 | MPropertyFriendlyName
    CUtlString m_anticipationPosParamName; // offset 0x40, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_anticipationPosParam; // offset 0x48, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_004C[0x4]; // offset 0x4C
    CUtlString m_anticipationHeadingParamName; // offset 0x50, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_anticipationHeadingParam; // offset 0x58, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flSpringConstant; // offset 0x5C, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    float32 m_flMinSpringTension; // offset 0x60, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    float32 m_flMaxSpringTension; // offset 0x64, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
};
