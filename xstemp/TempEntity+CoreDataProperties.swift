//
//  TempEntity+CoreDataProperties.swift
//  xstemp
//
//  Created by erdong on 2019/10/29.
//  Copyright © 2019 陈浩. All rights reserved.
//
//

import Foundation
import CoreData


extension TempEntity {

    @nonobjc public class func fetchRequest() -> NSFetchRequest<TempEntity> {
        return NSFetchRequest<TempEntity>(entityName: "TempEntity")
    }

    @NSManaged public var name: String?
    @NSManaged public var title: String?

}
