#pragma once

class CAnimGraphDoc_PlayerInputMotor : public CAnimGraphDoc_Motor /*0x0*/  // sizeof 0x78, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CUtlVector< float32 > m_sampleTimes; // offset 0x30, size 0x18, align 8 | MPropertyFriendlyName
    bool m_bUseAcceleration; // offset 0x48, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0049[0x3]; // offset 0x49
    float32 m_flSpringConstant; // offset 0x4C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flAnticipationDistance; // offset 0x50, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0054[0x4]; // offset 0x54
    CUtlString m_anticipationPosParamName; // offset 0x58, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_anticipationPosParam; // offset 0x60, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0064[0x4]; // offset 0x64
    CUtlString m_anticipationHeadingParamName; // offset 0x68, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_anticipationHeadingParam; // offset 0x70, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0074[0x4]; // offset 0x74
};
