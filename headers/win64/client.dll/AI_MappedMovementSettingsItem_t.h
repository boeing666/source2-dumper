#pragma once

struct AI_MappedMovementSettingsItem_t  // sizeof 0x10, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CGlobalSymbol m_sMovementSettingsId; // offset 0x0, size 0x8, align 8 | MPropertyFlattenIntoParentRow
    CUtlString m_sMovementSettingsName; // offset 0x8, size 0x8, align 8 | MPropertyFlattenIntoParentRow MPropertyAttributeEditor
};
