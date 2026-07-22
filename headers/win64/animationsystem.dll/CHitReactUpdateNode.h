#pragma once

class CHitReactUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0xD0, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    HitReactFixedSettings_t m_opFixedSettings; // offset 0x70, size 0x44, align 4
    char _pad_00B4[0x8]; // offset 0xB4
    CAnimParamHandle m_triggerParam; // offset 0xBC, size 0x2, align 1
    CAnimParamHandle m_hitBoneParam; // offset 0xBE, size 0x2, align 1
    CAnimParamHandle m_hitOffsetParam; // offset 0xC0, size 0x2, align 1
    CAnimParamHandle m_hitDirectionParam; // offset 0xC2, size 0x2, align 1
    CAnimParamHandle m_hitStrengthParam; // offset 0xC4, size 0x2, align 1
    char _pad_00C6[0x2]; // offset 0xC6
    float32 m_flMinDelayBetweenHits; // offset 0xC8, size 0x4, align 4
    bool m_bResetChild; // offset 0xCC, size 0x1, align 1
    char _pad_00CD[0x3]; // offset 0xCD
};
