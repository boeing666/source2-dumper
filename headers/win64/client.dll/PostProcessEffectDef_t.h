#pragma once

struct PostProcessEffectDef_t  // sizeof 0x18, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    PostProcessingGameStates m_eState; // offset 0x0, size 0x4, align 4
    float32 m_flStartDelay; // offset 0x4, size 0x4, align 4
    float32 m_flFadeInTime; // offset 0x8, size 0x4, align 4
    float32 m_flHoldTime; // offset 0xC, size 0x4, align 4
    float32 m_flFadeOutTime; // offset 0x10, size 0x4, align 4
    float32 m_flScale; // offset 0x14, size 0x4, align 4
};
