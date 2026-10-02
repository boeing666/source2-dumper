#pragma once

class CCitadel_Modifier_HideoutIntroVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CameraEntityOverride_t m_preIntroCamera; // offset 0x790, size 0x10, align 8
    CameraEntityOverride_t m_introCamera; // offset 0x7A0, size 0x10, align 8
};
