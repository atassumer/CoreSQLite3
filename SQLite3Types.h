//
// SQLite3Types.h
// CoreSQLite3 Framework
//
// Created by Mirek Rusin on 08/02/2011.
// Copyright 2011 Inteliv Ltd. All rights reserved.
//

#import "CoreSQLite3.h"

typedef struct {
  NSInteger retainCount;
  sqlite3_stmt *stmt;
} SQLite3Statement;

typedef enum {
  kSQLite3TypeInteger = SQLITE_INTEGER,
  kSQLite3TypeDouble  = SQLITE_FLOAT,
  kSQLite3TypeData    = SQLITE_BLOB,
  kSQLite3TypeNULL    = SQLITE_NULL,
  kSQLite3TypeString  = SQLITE_TEXT,
} SQLite3Type;

typedef SQLite3Statement *SQLite3StatementRef;

typedef struct {
  CFTypeRef isa;
  CFAllocatorRef allocator;
  sqlite3 *db;
  NSInteger retainCount;
} SQLite3Connection;

typedef SQLite3Connection* SQLite3ConnectionRef;

//typedef enum {
//  kSQLite3OpenOptionReadOnly  = SQLITE_OPEN_READONLY,
//  kSQLite3OpenOptionReadWrite = SQLITE_OPEN_READWRITE,
//  kSQLite3OpenOptionAutoProxy = SQLITE_OPEN_AUTOPROXY,
//} SQLite3OpenOptions;