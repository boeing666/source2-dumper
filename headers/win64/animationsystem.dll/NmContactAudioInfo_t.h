#pragma once

struct NmContactAudioInfo_t  // sizeof 0x18, align 0x8 [trivial_dtor] (animlib) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CGlobalSymbol m_audioActionID; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CGlobalSymbol m_audioTypeID; // offset 0x8, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor MPropertyAutoRebuildOnChange
    CGlobalSymbol m_soundeventOverrideID; // offset 0x10, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
};
