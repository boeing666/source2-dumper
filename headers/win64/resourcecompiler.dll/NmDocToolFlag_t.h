#pragma once

enum NmDocToolFlag_t : uint32_t  // sizeof 0x4
{
    None = 0,
    StandaloneButton = 1,
    ShowInContextMenu = 2,
    RequiresSelection = 4,
    RestrictToSingleFileSelection = 8,
};
