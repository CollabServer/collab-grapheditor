#pragma once

#include <cassert>

#include "Editor.h"
#include "collabclient/Client.h"
#include "collabdata/custom/SimpleGraph.h"


class Global {
    private:
        Editor              _editor;
        collab::Client      _collabclient;
        collab::SimpleGraph _graph;

    private:
        Global() = default;
        Global(const Global& other) = delete;
        Global& operator=(const Global& other) = delete;

    public:
        static Global& get() {
            static Global _instance;
            return _instance;
        }

    public:
        Editor& editor() { return _editor; }
        collab::Client& collabclient() { return _collabclient; }
        collab::SimpleGraph& graphdata() { return _graph; }
};