#pragma once

class CInfoInteraction : public C_PointEntity /*0x0*/  // sizeof 0x610, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CUtlSymbolLarge m_strInteractVData; // offset 0x5F0, size 0x8, align 8
    char _pad_05F8[0x10]; // offset 0x5F8
    float32 m_flInteractRadius; // offset 0x608, size 0x4, align 4
    SceneRequestHandle_t m_hSceneRequest; // offset 0x60C, size 0x4, align 255
};
