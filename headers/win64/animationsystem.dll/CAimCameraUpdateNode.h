#pragma once

class CAimCameraUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0xB8, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    CAnimParamHandle m_hParameterPosition; // offset 0x70, size 0x2, align 1
    CAnimParamHandle m_hParameterOrientation; // offset 0x72, size 0x2, align 1
    CAnimParamHandle m_hParameterPelvisOffset; // offset 0x74, size 0x2, align 1
    CAnimParamHandle m_hParameterCameraOnly; // offset 0x76, size 0x2, align 1
    CAnimParamHandle m_hParameterWeaponDepenetrationDistance; // offset 0x78, size 0x2, align 1
    CAnimParamHandle m_hParameterWeaponDepenetrationDelta; // offset 0x7A, size 0x2, align 1
    CAnimParamHandle m_hParameterCameraClearanceDistance; // offset 0x7C, size 0x2, align 1
    char _pad_007E[0x2]; // offset 0x7E
    AimCameraOpFixedSettings_t m_opFixedSettings; // offset 0x80, size 0x30, align 8
    char _pad_00B0[0x8]; // offset 0xB0
};
