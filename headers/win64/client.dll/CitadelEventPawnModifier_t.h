#pragma once

struct CitadelEventPawnModifier_t  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_strModifier; // offset 0x0, size 0x8, align 8 | MPropertyAttributeEditor
    KeyValues3 m_kvParams; // offset 0x8, size 0x10, align 8
};
