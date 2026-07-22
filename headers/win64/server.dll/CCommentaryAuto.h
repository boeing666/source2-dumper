#pragma once

class CCommentaryAuto : public CBaseEntity /*0x0*/  // sizeof 0x4F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CEntityIOOutput m_OnCommentaryNewGame; // offset 0x4A8, size 0x18, align 255
    CEntityIOOutput m_OnCommentaryMidGame; // offset 0x4C0, size 0x18, align 255
    CEntityIOOutput m_OnCommentaryMultiplayerSpawn; // offset 0x4D8, size 0x18, align 255
};
