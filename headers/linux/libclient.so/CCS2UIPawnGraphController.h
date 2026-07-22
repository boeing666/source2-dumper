#pragma once

class CCS2UIPawnGraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x1D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x88]; // offset 0x0
    CAnimGraph2ParamOptionalRef< float32 > m_nAnimationSeed; // offset 0x88, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_characterMode; // offset 0xA0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bCharacterModeReset; // offset 0xB8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_nTeamPreviewVariant; // offset 0xD0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_nTeamPreviewRandom; // offset 0xE8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_nTeamPreviewPosition; // offset 0x100, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_endOfMatchCelebration; // offset 0x118, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_action; // offset 0x130, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_bannerAnimation; // offset 0x148, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponCategory; // offset 0x160, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponType; // offset 0x178, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponState; // offset 0x190, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_inspectTurnAngle; // offset 0x1A8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bCT; // offset 0x1C0, size 0x18, align 8
};
