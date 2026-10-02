#pragma once

class CModifierKnockdownVData : public CCitadel_Modifier_StunnedVData /*0x0*/  // sizeof 0x930, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x870]; // offset 0x0
    float32 m_flSatVolumeRadius; // offset 0x870, size 0x4, align 4
    float32 m_flSatVolumeFadeOut; // offset 0x874, size 0x4, align 4
    float32 m_flGravityScale; // offset 0x878, size 0x4, align 4
    float32 m_flDesatAmount; // offset 0x87C, size 0x4, align 4
    Color m_satColorDesat; // offset 0x880, size 0x4, align 4
    Color m_satColorSat; // offset 0x884, size 0x4, align 4
    Color m_satColorOutline; // offset 0x888, size 0x4, align 4
    float32 m_flGetUpSeqDuration; // offset 0x88C, size 0x4, align 4 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceGetUp; // offset 0x890, size 0xA0, align 8
};
