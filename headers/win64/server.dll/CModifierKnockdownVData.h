#pragma once

class CModifierKnockdownVData : public CCitadel_Modifier_StunnedVData /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x840]; // offset 0x0
    float32 m_flSatVolumeRadius; // offset 0x840, size 0x4, align 4
    float32 m_flSatVolumeFadeOut; // offset 0x844, size 0x4, align 4
    float32 m_flGravityScale; // offset 0x848, size 0x4, align 4
    float32 m_flDesatAmount; // offset 0x84C, size 0x4, align 4
    Color m_satColorDesat; // offset 0x850, size 0x4, align 4
    Color m_satColorSat; // offset 0x854, size 0x4, align 4
    Color m_satColorOutline; // offset 0x858, size 0x4, align 4
    float32 m_flGetUpSeqDuration; // offset 0x85C, size 0x4, align 4 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceGetUp; // offset 0x860, size 0x88, align 8
};
