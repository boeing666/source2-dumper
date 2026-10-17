#pragma once

class CEconEntity : public CBaseAnimatingOverlay /*0x0*/, public IHasAttributes /*0xB50*/  // sizeof 0xCB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB68]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xB68, size 0x140, align 255
    CHandle< CBaseEntity > m_hOldProvidee; // offset 0xCA8, size 0x4, align 4
    int32 m_iOldOwnerClass; // offset 0xCAC, size 0x4, align 4
};
